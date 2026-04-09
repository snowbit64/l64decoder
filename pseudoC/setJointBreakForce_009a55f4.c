// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointBreakForce
// Entry Point: 009a55f4
// Size: 324 bytes
// Signature: undefined __thiscall setJointBreakForce(Bt2ScenegraphPhysicsContext * this, uint param_1, SetJointBreakForce * param_2)


/* Bt2ScenegraphPhysicsContext::setJointBreakForce(unsigned int,
   Bt2ScenegraphPhysicsContext::SetJointBreakForce const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setJointBreakForce
          (Bt2ScenegraphPhysicsContext *this,uint param_1,SetJointBreakForce *param_2)

{
  uint uVar1;
  long lVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  Bt2ScenegraphPhysicsContext *pBVar4;
  Bt2D6Joint **ppBVar5;
  ulong uVar6;
  float fVar7;
  Bt2D6Joint *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pBVar4 = *(Bt2ScenegraphPhysicsContext **)(this + 0x1c8);
  if (pBVar4 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar3 = this + 0x1c8;
    do {
      if (*(uint *)(pBVar4 + 0x20) >= param_1) {
        pBVar3 = pBVar4;
      }
      pBVar4 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar4 + (ulong)(*(uint *)(pBVar4 + 0x20) < param_1) * 8);
    } while (pBVar4 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar3 != this + 0x1c8) && (*(uint *)(pBVar3 + 0x20) <= param_1)) {
      fVar7 = *(float *)param_2;
      local_40 = *(Bt2D6Joint **)(pBVar3 + 0x30);
      if (1e+07 <= fVar7) {
        if (*(float *)(local_40 + 0x18) <= 3.402823e+38) {
          uVar1 = *(uint *)(this + 0x250);
          if (uVar1 != 0) {
            uVar6 = 0;
            ppBVar5 = *(Bt2D6Joint ***)(this + 0x248);
            do {
              if (*ppBVar5 == local_40) {
                uVar1 = uVar1 - 1;
                *(uint *)(this + 0x250) = uVar1;
                if ((uint)uVar6 < uVar1) {
                  *ppBVar5 = (*(Bt2D6Joint ***)(this + 0x248))[uVar1];
                }
                break;
              }
              uVar6 = uVar6 + 1;
              ppBVar5 = ppBVar5 + 1;
            } while (uVar1 != uVar6);
          }
        }
        *(undefined4 *)(local_40 + 0x18) = 0x7f7fffff;
      }
      else {
        if (*(float *)(local_40 + 0x18) == 3.402823e+38) {
          SimpleArray<Bt2D6Joint*,false,16u>::push_back
                    ((SimpleArray<Bt2D6Joint*,false,16u> *)(this + 0x248),&local_40);
          fVar7 = *(float *)param_2;
        }
        *(float *)(local_40 + 0x18) = fVar7 * *(float *)(*(long *)(this + 0x30) + 0x9c);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


