# PROJECT DOCUMENTATION

## THE PROBLEM

<u>**IMPORTANT**</u> - Commented sections are just to bring up to light the real understanding of what is being done.
Sometimes, it is used for referencing and others to explicitly document some functionality. 

<!-- This project is based in the **Udacity’s Self Driving Car Nanodegree - Vehicle Detection and Tracking using Machine Learning and HOG**. 
In my version, all functionalities are going to be implemented in C++.  -->

<!-- The problem consist in a basic cat detection and tracking. To achieve this result, a dataset with images of cats and dogs were downloaded from *Kaggle* in [here](https://www.kaggle.com/tongpython/cat-and-dog).

The tasks are enumerated below: -->

<!-- <ul>
  <li>Preproccess the dataset</li>
  <ul>
    <li>Implement a Histogram class to operate in a 3 channel image</li>
    <li>Implement a Image Handler class to operate over the images </li>
  </ul>
  <li>Neural network</li>
  <ul>
    <li> Implement a simple neural network know as *logistic regression* for binary classification </li> 
  </ul>
</ul> -->

---

## PROJECT STRUCTURE

```bash
root
│   README.md
│   .gitignore
|   LICENSE
|
└───project
|   |   README.md
|   |   CMakLists.txt
|   | 
│   └───include
│   │   (...)
|   │   
│   └───src
│   │   main.cpp

```

<!-- ℹ️ Classes Information:
<ul>
  <li></li>
</ul> -->

---

## RUBRIC POINTS REQUIRED AND SATISFIED

#### REQUIRED

<!-- :heavy_check_mark: -->

<ol> 
  <li>:x: README</li>
  <li>:x: Compiling and Testing</li>
</ol>

#### SATISFIED

:arrow_right: <u>Loops, Functions, I/O</u>
<ol> 
  <li>:x: The project demonstrates an understanding of C++ functions and control structures</li>
  <li>:x: The project reads data from a file and process the data, or the program writes data to a file</li>
  <li>:x: The project accepts user input and processes the input</li>
</ol>

:arrow_right: <u>Object Oriented Programming</u>
<ol> 
  <li>:x: The project uses Oriented Programming techniques</li>
  <li>:x: Classes use appropriate access specifiers for class members</li>
  <li>:x: Class constructors utilize member initialization lists</li>
  <li>:x: Classes abstract implementation details from their interfaces</li>
  <li>:x: Classes encapsulate behavior</li>
  <li>:x: Classes follow an appropriate inheritance hierarchy</li>
  <li>:x: Overloaded functions allow the same function to operate on different parameters</li>
  <li>:x: Derived class functions override virtual base class functions</li>
  <li>:x: Templates generalize functions in the project</li>
</ol>

:arrow_right: <u>Memory Management</u>
<ol> 
  <li>:x: The project makes use of references in functions declarations</li>
  <li>:x: The project uses destructors appropriatly</li>
  <li>:x: The project uses scope / Resource Acquisition Is Initialization (RAII) where appropriate</li>
  <li>:x: The project follows the Rule of 5</li>
  <li>:x: The project uses move semantics to move data, instead of copying it, where possible</li>
  <li>:x: The project uses smart pointers instead of raw pointers</li>
</ol>

:arrow_right: <u>Concurrency</u>
<ol> 
  <li>:x: The project uses multithreading</li>
  <li>:x: A promise and future is used in the project</li>
  <li>:x: A mutex or lock is used in the project</li>
  <li>:x: A condition variable is used in the project</li>
</ol>

---

## REFERENCES

:black_medium_small_square: [C++ Nanodegree Program](https://www.udacity.com/).
<br>
:black_medium_small_square: [C++ Core Guidelines](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines).
<br>
:black_medium_small_square: [C++ Reference](https://en.cppreference.com/).
<br>
:black_medium_small_square: [The C++ Programming Language: The C++ Programm](https://www.amazon.com.br/Programming-Language-Programm-Lang_p4-English-ebook/dp/B00DUW4BMS/ref=pd_sim_351_3/142-4349536-8902019?_encoding=UTF8&pd_rd_i=B00DUW4BMS&pd_rd_r=7bde91db-b7ff-4c03-a7f2-a6ebd1e334b2&pd_rd_w=VaFLg&pd_rd_wg=Tewwd&pf_rd_p=d8b852c2-a356-4723-9c70-f5925887a51f&pf_rd_r=E1K70T4W7RY7Z5ZRZP99&psc=1&refRID=E1K70T4W7RY7Z5ZRZP99).
<br>
:black_medium_small_square: [Effective Modern C++](https://www.amazon.com.br/Effective-Modern-Specific-Improve-English-ebook/dp/B00PGCMGDQ/ref=pd_sim_351_3/142-4349536-8902019?_encoding=UTF8&pd_rd_i=B00PGCMGDQ&pd_rd_r=2686edfe-1933-4702-813e-d24c1e2505d5&pd_rd_w=ci65H&pd_rd_wg=nLKu6&pf_rd_p=d8b852c2-a356-4723-9c70-f5925887a51f&pf_rd_r=YY9Y131WJH0SPQTK8NWQ&psc=1&refRID=YY9Y131WJH0SPQTK8NWQ).
<br>
:black_medium_small_square: [C++ Concurrency in Action](https://www.amazon.com.br/Concurrency-Action-2E-Anthony-Williams/dp/1617294691/ref=pd_rhf_se_s_pd_crcd_0_32?_encoding=UTF8&pd_rd_i=1617294691&pd_rd_r=45903d90-f5d8-47af-89bb-4976a142b373&pd_rd_w=a0dk8&pd_rd_wg=N748G&pf_rd_p=53ee5eea-feac-4952-a1bc-c2a9ff6d5aba&pf_rd_r=Y7JZ2YWNYWT1CSB1JXEA&psc=1&refRID=Y7JZ2YWNYWT1CSB1JXEA).
<!-- <br> -->
<!-- :black_medium_small_square: [Vehicle Detection and Tracking using Machine Learning and HOG](https://towardsdatascience.com/vehicle-detection-and-tracking-using-machine-learning-and-hog-f4a8995fc30a). -->
<!-- <br> -->
<!-- :black_medium_small_square: [OpenCV tutorials C++](https://docs.opencv.org/4.1.2/d9/df8/tutorial_root.html). -->