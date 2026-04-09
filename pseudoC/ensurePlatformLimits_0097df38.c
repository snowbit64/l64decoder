// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ensurePlatformLimits
// Entry Point: 0097df38
// Size: 372 bytes
// Signature: undefined __thiscall ensurePlatformLimits(MeshSplitManager * this, MeshSplitShape * param_1)


/* MeshSplitManager::ensurePlatformLimits(MeshSplitShape*) */

void __thiscall
MeshSplitManager::ensurePlatformLimits(MeshSplitManager *this,MeshSplitShape *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  
  if ((this[0x24] != (MeshSplitManager)0x0) ||
     ((*(uint *)(this + 0x78) <= *(uint *)this && (*(uint *)(this + 0x7c) <= *(uint *)(this + 4)))))
  {
    return;
  }
  Mutex::enterCriticalSection();
  lVar3 = *(long *)(this + 0x60);
  lVar2 = *(long *)(this + 0x68);
  if (lVar2 != lVar3) {
    uVar7 = 0;
    plVar5 = (long *)0x0;
    fVar4 = 3.402823e+38;
    do {
      do {
        plVar6 = *(long **)(lVar3 + uVar7 * 8);
        plVar1 = plVar5;
        fVar8 = fVar4;
        if ((plVar6 != (long *)param_1) &&
           (((byte)*(MeshSplitShape *)(plVar6 + 0x42) >> 6 & 1) != 0)) {
          RawTransformGroup::getPhysicsObject();
          fVar8 = (float)Bt2PhysicsRBObject::getVolume();
          lVar3 = *(long *)(this + 0x60);
          lVar2 = *(long *)(this + 0x68);
          plVar1 = plVar6;
          if (fVar8 == 0.0 || fVar4 <= fVar8) {
            plVar1 = plVar5;
            fVar8 = fVar4;
          }
        }
        fVar4 = fVar8;
        plVar5 = plVar1;
        uVar7 = (ulong)((int)uVar7 + 1);
      } while (uVar7 < (ulong)(lVar2 - lVar3 >> 3));
      Mutex::leaveCriticalSection();
      if (plVar5 == (long *)0x0) {
        return;
      }
      plVar1 = (long *)plVar5[4];
      if ((plVar1 == (long *)0x0) || (((byte)*(MeshSplitShape *)(plVar1 + 2) >> 6 & 1) == 0)) {
        lVar3 = *plVar5;
        plVar1 = plVar5;
      }
      else {
        lVar3 = *plVar1;
      }
      (**(code **)(lVar3 + 8))(plVar1);
      if ((*(uint *)(this + 0x78) <= *(uint *)this) &&
         (*(uint *)(this + 0x7c) <= *(uint *)(this + 4))) {
        return;
      }
      Mutex::enterCriticalSection();
      uVar7 = 0;
      lVar3 = *(long *)(this + 0x60);
      lVar2 = *(long *)(this + 0x68);
      plVar5 = (long *)0x0;
      fVar4 = 3.402823e+38;
    } while (lVar2 != lVar3);
  }
  Mutex::leaveCriticalSection();
  return;
}


