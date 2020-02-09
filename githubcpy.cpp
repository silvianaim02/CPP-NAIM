static const float h_kernel[] = {1, 1, 1, 1, 0, 1, 1, 1, 1};
static const arraykernel(3, 3, h_kernel, afHost);

array state = (randu(128, 128, f32) > 0.5).as(f32); // Generate starting state
Window myWindow(256, 256);
while(!myWindow.close()) {
  array nHood = convolve(state, kernel); // Obtain neighbors
  array C0 = (nHood == 2);               // Generate conditions for life
  array C1 = (nHood == 3);
  state = state * C0 + C1;               // Update state
  myWindow.image(state);                 // Display
}
