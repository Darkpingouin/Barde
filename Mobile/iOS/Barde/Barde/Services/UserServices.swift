//
//  UserServices.swift
//  Barde
//
//  Created by Arnaud Perrault on 24/02/2018.
//  Copyright © 2018 Arnaud Perrault. All rights reserved.
//

import Foundation
import CoreData
import Alamofire
import SwiftyJSON

class UserService {
    
    func getLocalData() -> Profil? {
        do {
            let fetchRequest = NSFetchRequest<NSFetchRequestResult>(entityName: "Profil")
            fetchRequest.fetchLimit = 1
            let result = try context.fetch(fetchRequest) as! [Profil]
            let profil = result.first
           
            return profil
        } catch {
            print("Cannot fetch profile")
        }
        
        return nil
    }
    
    func getUserData() {
        let headers: HTTPHeaders = [
            "Authorization": UserDefaults.standard.string(forKey: "Token")!,
            ]
        
        Alamofire.request(Utils().getApiUrl() + "/user/me", method:.get, headers: headers).responseJSON { response in
            print("Request: \(String(describing: response.request))")   // original url request
            print("Response: \(String(describing: response.response))") // http url response
            print("Result: \(String(describing: response.result.value))")
            
            if let httpStatusCode = response.response?.statusCode {
                switch(httpStatusCode) {
                case 200:
                    if ((response.result.value) != nil) {
                        
                         Utils().deleteAllRecord(entity: "Profil")
                        
                        let data = JSON(response.result.value!)["data"]
                        
                        let entity = NSEntityDescription.entity(forEntityName: "Profil", in: context)
                        let profil = NSManagedObject(entity: entity!, insertInto: context)
                        
                        profil.setValue(data["user"]["email"].stringValue, forKey: "email")
                        profil.setValue(data["user"]["name"]["firstName"].stringValue, forKey: "firstname")
                        profil.setValue(data["user"]["name"]["lastName"].stringValue, forKey: "lastname")
                        profil.setValue(data["user"]["name"]["userName"].stringValue, forKey: "username")
                        
                        UserDefaults.standard.set(data["user"]["name"]["firstName"].stringValue, forKey: "firstname")
                        UserDefaults.standard.set(data["user"]["name"]["lastName"].stringValue, forKey: "lastname")
                        UserDefaults.standard.set(data["user"]["name"]["userName"].stringValue, forKey: "username")
                        UserDefaults.standard.set(data["user"]["email"].stringValue, forKey: "email")
                        
                    
                        
                        if data["user"]["dateOfBirth"].string != nil {
                            let dateFormatter = DateFormatter()
                            dateFormatter.locale = Locale(identifier: "en_US_POSIX") // edited
                            dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ss.SSSZ"
                            let date = dateFormatter.date(from: data["user"]["dateOfBirth"].stringValue)!
                            dateFormatter.dateFormat = "MM/dd/YYYY"
                            let dateString = dateFormatter.string(from: date)
                            profil.setValue(dateString, forKey: "birthdate")
                            UserDefaults.standard.set(dateString, forKey: "birthdate")

                        }
                        
                        
                        do {
                            try context.save()
                        } catch {
                            
                            print("Error info: \(error)")
                            
                        }
                        
                    }
                    break
                case 400:
                    
                    break
                default:
                    print("default")
                    
                }
            }
        }
    }
    
    func updateUserData(tfFirstName: String, tfLastName: String, tfUserName: String, tfBirthDate: String, email: String) {
        let headers: HTTPHeaders = [
            "Authorization": UserDefaults.standard.string(forKey: "Token")!,
            ]
        
        var strMonth = ""
        var strYear = ""
        var strDay = ""
        
//        if let date = data.value(forKey:"birthdate") as? String {
//            if (!date.isEmpty) {
//                let dateFormatter = DateFormatter()
//                dateFormatter.dateFormat = "MM/dd/yyyy"
//                let date = dateFormatter.date(from: data.value(forKey:"birthdate") as! String)
//                dateFormatter.dateFormat = "MM"
//                strMonth = dateFormatter.string(from: date!)
//                dateFormatter.dateFormat = "yyyy"
//                strYear = dateFormatter.string(from: date!)
//                dateFormatter.dateFormat = "dd"
//                strDay = dateFormatter.string(from: date!)
//            }
//        }
        
//        let parameters: Parameters = [
//            "email":  data.value(forKey:"email") as! String,
//            "yearOfBirth": strYear,
//            "monthOfBirth": strMonth,
//            "dayOfBirth": strDay,
//            "firstName": data.value(forKey:"firstname") as! String,
//            "lastName": data.value(forKey:"lastname") as! String,
//            "userName": data.value(forKey:"username") as! String,
//            ]
        
                let dateFormatter = DateFormatter()
                dateFormatter.dateFormat = "MM/dd/yyyy"
                let date = dateFormatter.date(from: tfBirthDate as! String)
                dateFormatter.dateFormat = "MM"
                strMonth = dateFormatter.string(from: date!)
                dateFormatter.dateFormat = "yyyy"
                strYear = dateFormatter.string(from: date!)
                dateFormatter.dateFormat = "dd"
                strDay = dateFormatter.string(from: date!)
 
        
        let parameters: Parameters = [
            "email": email,
            "yearOfBirth": strYear,
            "monthOfBirth": strMonth,
            "dayOfBirth": strDay,
            "firstName":tfFirstName,
            "lastName": tfLastName,
            "userName": tfUserName
            ]
        
        print(headers);
        
        Alamofire.request(Utils().getApiUrl() + "/user/", method:.put, parameters: parameters, headers: headers).responseJSON { response in
            print("Request: \(String(describing: response.request))")   // original url request
            print("Response: \(String(describing: response.response))") // http url response
            print("Result: \(String(describing: response.result.value))")
            // response serialization result
            
            if let httpStatusCode = response.response?.statusCode {
                switch(httpStatusCode) {
                case 200:
                    if ((response.result.value) != nil) {
                        self.getUserData()
                    }
                    break
                case 400:
                    
                    break
                default:
                    print("default")
                    
                }
            }
        }
    }
    
    func reportProblem (data: String) {
        let headers: HTTPHeaders = [
            "Authorization": UserDefaults.standard.string(forKey: "Token")!,
            ]
        
        let parameters: Parameters = [
            "description":  data,
            "device": "iOS"
        ]
        
        Alamofire.request(Utils().getApiUrl() + "/report/", method:.post, parameters: parameters, headers: headers).responseJSON { response in
            print("Request: \(String(describing: response.request))")   // original url request
            print("Response: \(String(describing: response.response))") // http url response
            print("Result: \(String(describing: response.result.value))")
            // response serialization result
            
            if let httpStatusCode = response.response?.statusCode {
                switch(httpStatusCode) {
                case 200:
                    if ((response.result.value) != nil) {
                        
                    }
                    break
                case 400:
                    
                    break
                default:
                    print("default")
                    
                }
            }
        }
    }
}
