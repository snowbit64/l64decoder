// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSoftBody
// Entry Point: 00f76540
// Size: 1368 bytes
// Signature: undefined __thiscall ~btSoftBody(btSoftBody * this)


/* btSoftBody::~btSoftBody() */

void __thiscall btSoftBody::~btSoftBody(btSoftBody *this)

{
  int iVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__btSoftBody_0101b6c8;
  if (*(long **)(this + 200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 200) + 8))();
  }
  iVar1 = *(int *)(this + 0x5dc);
  while (0 < iVar1) {
    releaseCluster(this,0);
    iVar1 = *(int *)(this + 0x5dc);
  }
  iVar1 = *(int *)(this + 0x474);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(long *)(*(long *)(this + 0x480) + lVar2 * 8) != 0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        iVar1 = *(int *)(this + 0x474);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  iVar1 = *(int *)(this + 0x454);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(long *)(*(long *)(this + 0x460) + lVar2 * 8) != 0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        iVar1 = *(int *)(this + 0x454);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  if ((*(long *)(this + 0x680) != 0) && (this[0x688] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x680) = 0;
  this[0x688] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x674) = 0;
  if ((*(long *)(this + 0x608) != 0) && (this[0x610] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x610] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x608) = 0;
  *(undefined8 *)(this + 0x5fc) = 0;
  if ((*(long *)(this + 0x5e8) != 0) && (this[0x5f0] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x5e8) = 0;
  this[0x5f0] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x5dc) = 0;
  btDbvt::~btDbvt((btDbvt *)(this + 0x578));
  btDbvt::~btDbvt((btDbvt *)(this + 0x518));
  btDbvt::~btDbvt((btDbvt *)(this + 0x4b8));
  if ((*(long *)(this + 0x480) != 0) && (this[0x488] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x488] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x474) = 0;
  if ((*(long *)(this + 0x460) != 0) && (this[0x468] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x460) = 0;
  this[0x468] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x454) = 0;
  if ((*(long *)(this + 0x440) != 0) && (this[0x448] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x448] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x434) = 0;
  if ((*(long *)(this + 0x420) != 0) && (this[0x428] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x420) = 0;
  this[0x428] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x414) = 0;
  if ((*(long *)(this + 0x400) != 0) && (this[0x408] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x408] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x400) = 0;
  *(undefined8 *)(this + 0x3f4) = 0;
  if ((*(long *)(this + 0x3e0) != 0) && (this[1000] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x3e0) = 0;
  this[1000] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x3d4) = 0;
  if ((*(long *)(this + 0x3c0) != 0) && (this[0x3c8] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x3c8] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3b4) = 0;
  if ((*(long *)(this + 0x3a0) != 0) && (this[0x3a8] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x3a0) = 0;
  this[0x3a8] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x394) = 0;
  if ((*(long *)(this + 0x380) != 0) && (this[0x388] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x388] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x374) = 0;
  if ((*(long *)(this + 0x360) != 0) && (this[0x368] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x360) = 0;
  this[0x368] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x354) = 0;
  if ((*(long *)(this + 0x290) != 0) && (this[0x298] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x298] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x284) = 0;
  if ((*(long *)(this + 0x270) != 0) && (this[0x278] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x264) = 0;
  this[0x278] = (btSoftBody)0x1;
  if ((*(long *)(this + 0x230) != 0) && (this[0x238] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x238] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x224) = 0;
  if ((*(long *)(this + 0x210) != 0) && (this[0x218] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x204) = 0;
  this[0x218] = (btSoftBody)0x1;
  if ((*(long *)(this + 0x1f0) != 0) && (this[0x1f8] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x1f8] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1e4) = 0;
  if ((*(long *)(this + 0x160) != 0) && (this[0x168] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x160) = 0;
  this[0x168] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x154) = 0;
  *(undefined ***)this = &PTR__btCollisionObject_01019428;
  if ((*(long *)(this + 0x138) != 0) && (this[0x140] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x140] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 300) = 0;
  return;
}


