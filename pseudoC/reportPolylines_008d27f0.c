// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportPolylines
// Entry Point: 008d27f0
// Size: 132 bytes
// Signature: undefined reportPolylines(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FillPlaneGeometry::reportPolylines() const */

void FillPlaneGeometry::reportPolylines(void)

{
  long *plVar1;
  long *plVar2;
  long in_x0;
  undefined8 *in_x8;
  vector<Vector3,std::__ndk1::allocator<Vector3>> *pvVar3;
  vector<Vector3,std::__ndk1::allocator<Vector3>> *this;
  
  plVar1 = *(long **)(in_x0 + 0xb0);
  plVar2 = *(long **)(in_x0 + 0xb8);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (plVar1 != plVar2) {
    pvVar3 = (vector<Vector3,std::__ndk1::allocator<Vector3>> *)0x0;
    this = (vector<Vector3,std::__ndk1::allocator<Vector3>> *)0x0;
    while( true ) {
      if (this == pvVar3) {
                    /* try { // try from 008d2848 to 008d284f has its CatchHandler @ 008d2874 */
        std::__ndk1::
        vector<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>,std::__ndk1::allocator<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>>>
        ::__push_back_slow_path<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>const&>
                  ((vector<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>,std::__ndk1::allocator<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>>>
                    *)in_x8,(vector *)(*plVar1 + 0x10));
      }
      else {
                    /* try { // try from 008d2834 to 008d283b has its CatchHandler @ 008d287c */
        std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>::vector
                  (this,(vector *)(*plVar1 + 0x10));
        in_x8[1] = this + 0x18;
      }
      if (plVar1 + 1 == plVar2) break;
      this = (vector<Vector3,std::__ndk1::allocator<Vector3>> *)in_x8[1];
      pvVar3 = (vector<Vector3,std::__ndk1::allocator<Vector3>> *)in_x8[2];
      plVar1 = plVar1 + 1;
    }
  }
  return;
}


