# Labs: Northwestern University CTD Summer Program 2021

This repository contains the coursework and capstone project developed during the **Northwestern University Center for Talent Development (CTD) Summer Program**. This opportunity was made possible through the sponsorship of the **Mawhiba Safeer** program during my high school studies.

## Course Overview
**Course:** Internet of Things (IoT) with Windy City Lab

Throughout this program, various foundational labs were completed (as seen in the `lab1` through `lab19` folders) to build a strong baseline in IoT hardware and software engineering using Particle devices and C++.

## Capstone Project
The culmination of the summer program is the `capstonedemo` project. 

The capstone is an IoT application built on a Particle device, integrating with the **Blynk** application over Wi-Fi. It features:
- **Joystick Integration (`xy` movement)**: Real-time control capturing `x` and `y` coordinates to manipulate the device state.
- **RGB LED Sequences**: Dynamic, automated color-cycling loops indicating device activity and status.
- **Multithreading**: Utilizing `SYSTEM_THREAD(ENABLED)` and `os_thread_create` to ensure the Particle device maintains cloud connectivity while processing local hardware tasks concurrently.

### Code
The source code for the capstone project can be found in the [capstonedemo (`src/CapstoneDemo.ino`)](./capstonedemo/src/CapstoneDemo.ino) directory.

## Certificates and Achievements
Records of completion, including the Student Certificate and Unofficial Academic Transcript for this program, have been preserved in the `certificates/` directory of this repository for reference.
