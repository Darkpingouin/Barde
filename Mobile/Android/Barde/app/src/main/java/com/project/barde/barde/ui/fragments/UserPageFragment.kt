package com.project.barde.barde.ui.fragments

import android.content.Intent
import android.os.Bundle
import android.support.v4.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Button
import android.widget.TextView
import com.github.kittinunf.fuel.core.FuelManager
import com.project.barde.barde.R
import com.project.barde.barde.db.UserDbHelper
import com.project.barde.barde.db.UserTable
import com.project.barde.barde.db.database
import com.project.barde.barde.ui.activities.FirstPage
import com.project.barde.barde.ui.activities.UserProfileActivity
import kotlinx.android.synthetic.main.fragment_user_page.*

/**
 * Created by michael on 11/02/2018.
 */
class UserPageFragment : Fragment(), UserDbHelper.dataListener {
    private lateinit var v : View

    override fun updateUser() {
        activity.database.use {
            val c = rawQuery("SELECT * FROM user LIMIT 1", null)
            if(c.count >= 1){
                c.moveToFirst()
                v.findViewById<TextView>(R.id.activity_main_email).setText(c.getString(c.getColumnIndex(UserTable.EMAIL)))
                v.findViewById<TextView>(R.id.activity_main_full_name).setText(c.getString(c.getColumnIndex(UserTable.FIRSTNAME)) + " " + c.getString(c.getColumnIndex(UserTable.LASTNAME)))
            }
        }
    }

    override fun onCreateView(inflater: LayoutInflater?, container: ViewGroup?, savedInstanceState: Bundle?): View? {
        v = inflater!!.inflate(R.layout.fragment_user_page, container, false) as View
        activity.database.listener.add(this)
        updateUser()
        v.findViewById<Button>(R.id.user_page_logout).setOnClickListener {
            FuelManager.instance.baseHeaders = mapOf("Authorization" to "")
            startActivity(Intent(activity, FirstPage::class.java))
        }
        v.findViewById<Button>(R.id.update_profile).setOnClickListener {
            startActivity(Intent(activity, UserProfileActivity::class.java))
        }
        return v
    }

    fun getUserInfo(){
        activity.database.use {
            val c = rawQuery("SELECT * FROM user LIMIT 1", null)
            if(c.count >= 1){
                c.moveToFirst()
                v.findViewById<TextView>(R.id.activity_main_email).setText(c.getString(c.getColumnIndex(UserTable.EMAIL)))
                v.findViewById<TextView>(R.id.activity_main_full_name).setText(c.getString(c.getColumnIndex(UserTable.FIRSTNAME)) + " " + c.getString(c.getColumnIndex(UserTable.LASTNAME)))
            }
        }
    }
}