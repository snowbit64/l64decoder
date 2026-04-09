// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2PhysicsOverlapCallback
// Entry Point: 009b3cd4
// Size: 228 bytes
// Signature: undefined __thiscall Bt2PhysicsOverlapCallback(Bt2PhysicsOverlapCallback * this)


/* Bt2PhysicsOverlapCallback::Bt2PhysicsOverlapCallback() */

void __thiscall
Bt2PhysicsOverlapCallback::Bt2PhysicsOverlapCallback(Bt2PhysicsOverlapCallback *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  void *__s;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  this[0x20] = (Bt2PhysicsOverlapCallback)0x1;
  this[0x58] = (Bt2PhysicsOverlapCallback)0x1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined ***)this = &PTR__Bt2PhysicsOverlapCallback_00fe19b8;
  *(undefined8 *)(this + 0x38) = 0;
                    /* try { // try from 009b3d18 to 009b3d97 has its CatchHandler @ 009b3db8 */
  lVar4 = btAlignedAllocInternal(0x8000,0x10);
  uVar3 = *(uint *)(this + 0xc);
  if (0 < (int)uVar3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(lVar4 + lVar5);
      puVar2 = (undefined8 *)(*(long *)(this + 0x18) + lVar5);
      lVar5 = lVar5 + 0x20;
      uVar8 = *puVar2;
      uVar7 = puVar2[3];
      uVar6 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar8;
      puVar1[3] = uVar7;
      puVar1[2] = uVar6;
    } while ((ulong)uVar3 * 0x20 - lVar5 != 0);
  }
  if ((*(void **)(this + 0x18) != (void *)0x0) && (this[0x20] != (Bt2PhysicsOverlapCallback)0x0)) {
    btAlignedFreeInternal(*(void **)(this + 0x18));
  }
  *(long *)(this + 0x18) = lVar4;
  this[0x20] = (Bt2PhysicsOverlapCallback)0x1;
  *(undefined4 *)(this + 0x10) = 0x400;
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  __s = operator_new__(0x1000);
  *(void **)(this + 0x38) = __s;
  memset(__s,0xff,0x1000);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


