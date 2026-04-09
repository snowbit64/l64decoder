// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetLightJointDrive
// Entry Point: 009a8c84
// Size: 228 bytes
// Signature: undefined __thiscall enqueueSetLightJointDrive(Bt2ScenegraphPhysicsContext * this, uint param_1, bool param_2, bool param_3, Vector3 * param_4, float param_5)


/* Bt2ScenegraphPhysicsContext::enqueueSetLightJointDrive(unsigned int, bool, bool, Vector3 const&,
   float) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetLightJointDrive
          (Bt2ScenegraphPhysicsContext *this,uint param_1,bool param_2,bool param_3,Vector3 *param_4
          ,float param_5)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *pBVar2;
  long lVar3;
  Bt2ScenegraphPhysicsContext *pBVar4;
  uint local_58;
  undefined4 uStack_54;
  undefined local_50;
  undefined local_4f;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  float fStack_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_4c = *(undefined4 *)param_4;
  uStack_48 = *(undefined4 *)(param_4 + 4);
  local_44 = *(undefined4 *)(param_4 + 8);
  uStack_54 = 5;
  local_58 = param_1;
  local_50 = param_2;
  local_4f = param_3;
  fStack_40 = param_5;
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    pBVar4 = *(Bt2ScenegraphPhysicsContext **)(this + 0x1c8);
    if (pBVar4 != (Bt2ScenegraphPhysicsContext *)0x0) {
      pBVar2 = this + 0x1c8;
      do {
        if (*(uint *)(pBVar4 + 0x20) >= param_1) {
          pBVar2 = pBVar4;
        }
        pBVar4 = *(Bt2ScenegraphPhysicsContext **)
                  (pBVar4 + (ulong)(*(uint *)(pBVar4 + 0x20) < param_1) * 8);
      } while (pBVar4 != (Bt2ScenegraphPhysicsContext *)0x0);
      if ((pBVar2 != this + 0x1c8) && (*(uint *)(pBVar2 + 0x20) <= param_1)) {
        lVar3 = *(long *)(pBVar2 + 0x30);
        if (param_2) {
          if (!param_3) {
            *(undefined4 *)(lVar3 + 0x164) = local_4c;
            *(undefined4 *)(lVar3 + 0x168) = uStack_48;
            *(undefined4 *)(lVar3 + 0x16c) = local_44;
            *(undefined4 *)(lVar3 + 0x170) = 0;
          }
        }
        else if (!param_3) {
          *(undefined4 *)(lVar3 + 0x1e4) = local_4c;
          *(undefined4 *)(lVar3 + 0x228) = uStack_48;
          *(undefined4 *)(lVar3 + 0x26c) = local_44;
        }
      }
    }
  }
  else {
    SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand,true,32u>::push_back
              ((SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand,true,32u> *)(this + 0x208),
               (JointCommand *)&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


