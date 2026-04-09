// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextPedestrianForRaycast
// Entry Point: 008980ec
// Size: 140 bytes
// Signature: undefined __thiscall getNextPedestrianForRaycast(PedestrianSystem * this, uint param_1, uint param_2, bool param_3, uint * param_4)


/* PedestrianSystem::getNextPedestrianForRaycast(unsigned int, unsigned int, bool, unsigned int&) */

undefined8 __thiscall
PedestrianSystem::getNextPedestrianForRaycast
          (PedestrianSystem *this,uint param_1,uint param_2,bool param_3,uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  PedestrianSystem *pPVar3;
  
  uVar1 = *(uint *)(this + 0x25904);
  if (param_1 < uVar1) {
    uVar2 = (ulong)param_1;
    pPVar3 = this + (ulong)param_1 * 0x108 + 0x1d4c9;
    do {
      if ((!param_3) || (*pPVar3 == (PedestrianSystem)0x0)) goto LAB_0089816c;
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 0x108;
    } while (uVar1 != (uint)uVar2);
  }
  if (param_2 <= uVar1) {
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    uVar2 = 0;
    pPVar3 = this + 0x1d4c9;
    do {
      if ((!param_3) || (*pPVar3 == (PedestrianSystem)0x0)) {
LAB_0089816c:
        *param_4 = (uint)uVar2;
        return 1;
      }
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 0x108;
    } while (uVar1 != uVar2);
  }
  return 0;
}


