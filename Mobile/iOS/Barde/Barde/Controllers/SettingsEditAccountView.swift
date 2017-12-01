//
//  SettingsEditAccountView.swift
//  Barde
//
//  Created by Arnaud Perrault on 17/11/2017.
//  Copyright © 2017 Arnaud Perrault. All rights reserved.
//

import UIKit
import CoreData

class SettingsEditAccountView: UIViewController, UITextFieldDelegate {

    @IBOutlet weak var firstNameInput: UITextField!
    @IBOutlet weak var tfFirstName: UITextField!
    @IBOutlet weak var tfLastName: UITextField!
    @IBOutlet weak var tfEmail: UITextField!
    @IBOutlet weak var tfUserName: UITextField!
    @IBOutlet weak var tfBirthDate: UITextField!
    
    var profilFromLocal: Profil? // optional
    
    let datePicker = UIDatePicker()
    
    func createDatePicker() {
        datePicker.datePickerMode = .date
        
        tfBirthDate.inputView = datePicker
        datePicker.addTarget(self, action: #selector(datePickerValueChanged(_:)), for: .valueChanged)
    }
    
    @objc func datePickerValueChanged(_ sender: Any) {
       let dateFormatter = DateFormatter()
        
        dateFormatter.dateStyle = .short
        dateFormatter.timeStyle = .none
        
        tfBirthDate.text = dateFormatter.string(from: datePicker.date)
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        createDatePicker()
        
        self.navigationItem.title = "Compte"
        
        tfFirstName.addTarget(self, action: #selector(textFieldDidBeginEditing(_:)), for: .editingDidBegin)
        tfLastName.addTarget(self, action: #selector(textFieldDidBeginEditing(_:)), for: .editingDidBegin)
        tfEmail.addTarget(self, action: #selector(textFieldDidBeginEditing(_:)), for: .editingDidBegin)
        tfUserName.addTarget(self, action: #selector(textFieldDidBeginEditing(_:)), for: .editingDidBegin)
        tfBirthDate.addTarget(self, action: #selector(textFieldDidBeginEditing(_:)), for: .editingDidBegin)

        loadUserData()
    }
  
    @IBAction func saveButton(_ sender: Any) {
        
        saveUserData()
        ad.saveContext()
        
        _ = self.navigationController?.popViewController(animated: true)

    }
    
    func saveUserData() {
        var profil: Profil!
        
        profil = profilFromLocal
        
        if let email = tfEmail.text{
            if (Utils().isValid(email))
            {
                profil.email = email
            } else {
                let refreshAlert = UIAlertController(title: "Adresse e-mail invalide.", message: "Veuillez saisir une adresse e-mail valide.", preferredStyle: UIAlertControllerStyle.alert)
                
                refreshAlert.addAction(UIAlertAction(title: "Ok", style: .default, handler: { (action: UIAlertAction!) in
                }))
                
                present(refreshAlert, animated: true, completion: nil)
            }
        }
        if let firstname = tfFirstName.text{
            
            if (!firstname.isEmpty)
            {
                profil.firstname = firstname
            } else {
                let refreshAlert = UIAlertController(title: "Champs \"Prénom\" invalide.", message: "Le champs \"Prénom\" ne peut pas être vide.", preferredStyle: UIAlertControllerStyle.alert)
                
                refreshAlert.addAction(UIAlertAction(title: "Ok", style: .default, handler: { (action: UIAlertAction!) in
                }))
                
                present(refreshAlert, animated: true, completion: nil)
            }
        }
        if let lastname = tfLastName.text{
            if (!lastname.isEmpty)
            {
                profil.lastname = lastname
            } else {
                let refreshAlert = UIAlertController(title: "Champs \"Nom\" invalide.", message: "Le champs \"Nom\" ne peut pas être vide.", preferredStyle: UIAlertControllerStyle.alert)
                
                refreshAlert.addAction(UIAlertAction(title: "Ok", style: .default, handler: { (action: UIAlertAction!) in
                }))
                
                present(refreshAlert, animated: true, completion: nil)
            }
        }
        if let userName = tfUserName.text{
            if (!userName.isEmpty)
            {
                profil.username = userName
            } else {
                let refreshAlert = UIAlertController(title: "Champs \"Pseudo\" invalide.", message: "Le champs \"Pseudo\" ne peut pas être vide.", preferredStyle: UIAlertControllerStyle.alert)
                
                refreshAlert.addAction(UIAlertAction(title: "Ok", style: .default, handler: { (action: UIAlertAction!) in
                }))
                
                present(refreshAlert, animated: true, completion: nil)
            }
        }
        if let birthdate = tfBirthDate.text{
            if (!birthdate.isEmpty)
            {
                profil.birthdate = birthdate
            }
        }
    }
    
    func loadUserData(){
        if let profil = profilFromLocal{
            tfEmail.text = profil.email
            tfFirstName.text = profil.firstname
            tfLastName.text = profil.lastname
            tfUserName.text = profil.username
            tfBirthDate.text = profil.birthdate
        }
    }
    
    func textFieldDidBeginEditing(_ textField: UITextField) {
        self.navigationItem.setHidesBackButton(true, animated: false)
        
        navigationItem.rightBarButtonItem = UIBarButtonItem(title: "OK", style: .plain, target: self, action: #selector(validChange(_:)))
        navigationItem.leftBarButtonItem = UIBarButtonItem(title: "Annuler", style: .plain, target: self, action: #selector(dismissChange(_:)))
    }
    
    @objc func validChange(_ sender: Any) {
        self.navigationItem.setHidesBackButton(false, animated: true)
        self.navigationItem.rightBarButtonItem = nil;
        self.navigationItem.leftBarButtonItem = nil;
        tfFirstName.resignFirstResponder()
        tfLastName.resignFirstResponder()
        tfEmail.resignFirstResponder()
        tfUserName.resignFirstResponder()
        tfBirthDate.resignFirstResponder()
        self.view.endEditing(true)
        saveUserData()
    }
    
    @objc func dismissChange(_ sender: Any) {
        self.navigationItem.setHidesBackButton(false, animated: true)
        self.navigationItem.rightBarButtonItem = nil;
        self.navigationItem.leftBarButtonItem = nil;
        loadUserData()
        tfFirstName.resignFirstResponder()
        tfLastName.resignFirstResponder()
        tfEmail.resignFirstResponder()
        tfUserName.resignFirstResponder()
        tfBirthDate.resignFirstResponder()
    }
}

