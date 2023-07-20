# nikki93-thesis
Nikki93's undergrad senior thesis


# chatgpt summary

This 2015 paper proposes a novel device and software for 3D scanning of static scenes using a head-mounted virtual reality (VR) interface. The device provides real-time feedback, allowing users to view their ongoing scan from multiple angles and viewpoints. This capability makes it easier to spot and correct errors like holes and other artifacts interactively.

The paper outlines three key features of the method:

Live point cloud view: This is the core element of the device, which provides a live display of the depth camera feed in a VR view. The display can be rotated and zoomed in/out, offering a low-latency, real-time rendering of the 3D point cloud data. A user can move around to observe the updating point cloud from different perspectives.

First-person view: When the depth camera is mounted on the head-mounted VR display, a first-person view effect is achieved. The VR system translates the point cloud data into the space of the depth camera, effectively creating a 3D 'see-through' display of the environment. The user can switch between first-person view and third-person mode, which provides different advantages in terms of identifying holes and orienting the VR display for scanning.

Live registration: This process involves coordinating multiple point cloud captures so that their relative positions and orientations match those of the real-world surfaces they are capturing. With the depth camera mounted on a head-tracking device, the system uses the tracking information to position the point cloud captures. This approach enables rapid, interactive registration of the point clouds.

Overall, the device integrates VR and 3D scanning technology to provide real-time, interactive scanning of static environments, offering significant utility for applications that require detailed 3D environment reconstruction.



The paper outlines the implementation of the proposed device and software for 3D scanning. The program is written in C++ and employs several programming libraries and SDKs, such as OpenGL for rendering, SDL to manage an OpenGL context and window, Oculus Rift SDK for VR rendering and head tracking, OpenGL Mathematics (GLM) for mathematical structures and operations, and the Intel Double Springs 4 SDK to read depth images.

The system comprises four main subsystems:

Game: It manages an SDL window with an OpenGL context, handles events, provides an FPS (Frames Per Second) display, and runs the main event loop. The Game::update(update, draw) method is crucial for this system. It manages the main event loop with two functions update and draw. The update function runs every loop, and draw is called whenever the scene requires re-rendering.

VR: It interfaces with the Oculus Rift device using its SDK. The VR class constructor creates an OpenGL framebuffer that is shared with the Oculus SDK. The public VR::draw(drawer) method draws to the VR display by calling the drawer function twice, once for each eye, setting up projection and view matrices according to the eye being rendered from. Additionally, the VR::eye_transforms() function returns two matrices, each representing the camera matrix of an eye.

DS: It serves as the main interface to the depth camera, using the Intel Double Springs 4 SDK. However, the document ends before further information about the DS implementation can be detailed.

Scene: This class manages scene elements and is responsible for rendering them. However, further details about the Scene implementation are not given in the provided text.

Overall, the software design emphasizes separation of concerns with different components managing the window context, VR rendering, depth camera data reading, and scene management, which makes the system more modular and easier to maintain or expand.
