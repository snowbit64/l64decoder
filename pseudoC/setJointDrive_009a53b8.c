// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointDrive
// Entry Point: 009a53b8
// Size: 148 bytes
// Signature: undefined __thiscall setJointDrive(Bt2ScenegraphPhysicsContext * this, uint param_1, SetJointDrive * param_2)


/* Bt2ScenegraphPhysicsContext::setJointDrive(unsigned int,
   Bt2ScenegraphPhysicsContext::SetJointDrive const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setJointDrive
          (Bt2ScenegraphPhysicsContext *this,uint param_1,SetJointDrive *param_2)

{
  Bt2ScenegraphPhysicsContext *pBVar1;
  long lVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  undefined4 uVar4;
  
  pBVar3 = *(Bt2ScenegraphPhysicsContext **)(this + 0x1c8);
  if (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar1 = this + 0x1c8;
    do {
      if (*(uint *)(pBVar3 + 0x20) >= param_1) {
        pBVar1 = pBVar3;
      }
      pBVar3 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar3 + (ulong)(*(uint *)(pBVar3 + 0x20) < param_1) * 8);
    } while (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar1 != this + 0x1c8) && (*(uint *)(pBVar1 + 0x20) <= param_1)) {
      lVar2 = *(long *)(pBVar1 + 0x30);
      if (*param_2 == (SetJointDrive)0x0) {
        if (param_2[1] == (SetJointDrive)0x0) {
          *(undefined4 *)(lVar2 + 0x1e4) = *(undefined4 *)(param_2 + 4);
          *(undefined4 *)(lVar2 + 0x228) = *(undefined4 *)(param_2 + 8);
          *(undefined4 *)(lVar2 + 0x26c) = *(undefined4 *)(param_2 + 0xc);
          return;
        }
      }
      else if (param_2[1] == (SetJointDrive)0x0) {
        *(undefined4 *)(lVar2 + 0x164) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(lVar2 + 0x168) = *(undefined4 *)(param_2 + 8);
        uVar4 = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)(lVar2 + 0x170) = 0;
        *(undefined4 *)(lVar2 + 0x16c) = uVar4;
        return;
      }
    }
  }
  return;
}


