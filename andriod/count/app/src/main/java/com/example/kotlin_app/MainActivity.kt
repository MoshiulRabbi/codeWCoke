package com.example.kotlin_app

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        var cnt = 0

        pOne.setOnClickListener {
            cnt++
            textView.text = "Lets Count: $cnt"
        }

        mOne.setOnClickListener {
            cnt--
            textView.text = "Lets Count: $cnt"
        }


    }
}