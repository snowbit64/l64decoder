// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btCollisionWorld
// Entry Point: 00f4885c
// Size: 224 bytes
// Signature: undefined __thiscall ~btCollisionWorld(btCollisionWorld * this)


/* btCollisionWorld::~btCollisionWorld() */

void __thiscall btCollisionWorld::~btCollisionWorld(btCollisionWorld *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = *(int *)(this + 0xc);
  *(undefined ***)this = &PTR__btCollisionWorld_01019470;
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar5 = *(long *)(*(long *)(this + 0x18) + lVar4 * 8);
      lVar3 = *(long *)(lVar5 + 0xc0);
      if (lVar3 != 0) {
        plVar1 = (long *)(**(code **)(**(long **)(this + 0x60) + 0x48))();
        (**(code **)(*plVar1 + 0x50))(plVar1,lVar3,*(undefined8 *)(this + 0x28));
        (**(code **)(**(long **)(this + 0x60) + 0x18))
                  (*(long **)(this + 0x60),lVar3,*(undefined8 *)(this + 0x28));
        iVar2 = *(int *)(this + 0xc);
        *(undefined8 *)(lVar5 + 0xc0) = 0;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btCollisionWorld)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  operator_delete(this);
  return;
}


