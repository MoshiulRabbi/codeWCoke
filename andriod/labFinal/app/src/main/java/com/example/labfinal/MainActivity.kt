package com.example.labfinal

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        btnToast.setOnClickListener {
            val name = name.text.toString()

            Toast.makeText(this,"Hi toast is $name",Toast.LENGTH_LONG).show()
        }

        BOOM.setOnClickListener {
            val name = name.text.toString()
            val a1 = age_1.text.toString().toFloat()
            val a2 = age_2.text.toString().toFloat()

            Intent(this,Second_act::class.java).also {
                it.putExtra("EXTRA_NAME",name)
                it.putExtra("EXTRA_A1",a1)
                it.putExtra("EXTRA_A2",a2)

                startActivity(it)
            }
        }

    }
}