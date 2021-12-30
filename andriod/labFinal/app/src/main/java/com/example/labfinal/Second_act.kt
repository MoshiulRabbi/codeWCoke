package com.example.labfinal

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_main.*
import kotlinx.android.synthetic.main.activity_second.*

class Second_act : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_second)

        val name = intent.getStringExtra("EXTRA_NAME")
        val a1 = intent.getFloatExtra("EXTRA_A1",0.0F)
        val a2 = intent.getFloatExtra("EXTRA_A2",0.0F)
        val total_sum = a1 + a2

        var final = "$name will die at $total_sum years"
        final_result.text  = final

    }
}