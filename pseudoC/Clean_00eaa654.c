// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clean
// Entry Point: 00eaa654
// Size: 308 bytes
// Signature: undefined Clean(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::VHACD::Clean() */

void VHACD::VHACD::Clean(void)

{
  long lVar1;
  long in_x0;
  Volume *this;
  Mesh *this_00;
  long lVar2;
  long lVar3;
  
  if (*(long **)(in_x0 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 8) + 0x18))();
    *(undefined8 *)(in_x0 + 8) = 0;
  }
  this = *(Volume **)(in_x0 + 0x2a8);
  if (this != (Volume *)0x0) {
    Volume::~Volume(this);
    operator_delete(this);
  }
  if (*(long **)(in_x0 + 0x2b0) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x2b0) + 8))();
  }
  lVar2 = *(long *)(in_x0 + 0x218);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      lVar1 = in_x0 + 0x10;
      if (*(long *)(in_x0 + 0x220) != 0x40) {
        lVar1 = *(long *)(in_x0 + 0x210);
      }
      this_00 = *(Mesh **)(lVar1 + lVar3 * 8);
      if (this_00 != (Mesh *)0x0) {
        Mesh::~Mesh(this_00);
        operator_delete(this_00);
      }
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
  }
  *(undefined8 *)(in_x0 + 0x218) = 0;
  if (*(void **)(in_x0 + 0x210) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x210));
  }
  *(undefined8 *)(in_x0 + 0x210) = 0;
  *(undefined8 *)(in_x0 + 0x220) = 0x40;
  if (*(long **)(in_x0 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 8) + 0x18))();
    *(undefined8 *)(in_x0 + 8) = 0;
  }
  *(undefined8 *)(in_x0 + 0x2a8) = 0;
  *(undefined8 *)(in_x0 + 0x2b0) = 0;
  *(undefined8 *)(in_x0 + 0x298) = 0x40;
  *(undefined8 *)(in_x0 + 0x260) = 0;
  *(undefined8 *)(in_x0 + 600) = 0;
  *(undefined8 *)(in_x0 + 0x270) = 0;
  *(undefined8 *)(in_x0 + 0x268) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(in_x0 + 0x228));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(in_x0 + 0x240));
  *(undefined4 *)(in_x0 + 0x2b8) = 0;
  return;
}


