// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btConvexPolyhedron
// Entry Point: 00f6830c
// Size: 336 bytes
// Signature: undefined __thiscall ~btConvexPolyhedron(btConvexPolyhedron * this)


/* btConvexPolyhedron::~btConvexPolyhedron() */

void __thiscall btConvexPolyhedron::~btConvexPolyhedron(btConvexPolyhedron *this)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__btConvexPolyhedron_0101b008;
  if ((*(long *)(this + 0x58) != 0) && (this[0x60] != (btConvexPolyhedron)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  uVar2 = *(uint *)(this + 0x2c);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x60] = (btConvexPolyhedron)0x1;
  if (0 < (int)uVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(long *)(this + 0x38) + lVar3;
      if (*(long *)(lVar1 + 0x10) != 0 && *(char *)(lVar1 + 0x18) != '\0') {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      lVar3 = lVar3 + 0x30;
      *(undefined *)(lVar1 + 0x18) = 1;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined4 *)(lVar1 + 8) = 0;
    } while ((ulong)uVar2 * 0x30 - lVar3 != 0);
  }
  if ((*(long *)(this + 0x38) != 0) && (this[0x40] != (btConvexPolyhedron)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x40] = (btConvexPolyhedron)0x1;
  if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btConvexPolyhedron)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x20] = (btConvexPolyhedron)0x1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


