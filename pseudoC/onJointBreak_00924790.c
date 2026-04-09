// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onJointBreak
// Entry Point: 00924790
// Size: 356 bytes
// Signature: undefined __cdecl onJointBreak(uint param_1, float param_2)


/* DestructionShape::onJointBreak(unsigned int, float) */

undefined8 DestructionShape::onJointBreak(uint param_1,float param_2)

{
  long lVar1;
  DestructionShape *this;
  ulong uVar2;
  uint in_w1;
  long lVar3;
  float local_6c;
  float fStack_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  this = (DestructionShape *)(ulong)param_1;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x290) != 0) &&
     (((*(long *)(this + 0x3b8) != 0 || (*(long *)(this + 0x368) != *(long *)(this + 0x360))) &&
      (uVar2 = Bt2ScenegraphPhysicsContext::getLightJointPosition
                         ((uint)*(long *)(this + 0x290),(float *)(ulong)in_w1), (uVar2 & 1) != 0))))
  {
    local_50 = fStack_44;
    fStack_4c = local_40;
    fStack_54 = local_48 + 0.2;
    local_6c = local_48 + -0.1;
    lVar3 = *(long *)(this + 0x360);
    local_58 = local_40 + -0.173205;
    fStack_5c = fStack_44;
    fStack_68 = fStack_44;
    local_64 = local_40 + 0.173205;
    local_60 = local_6c;
    if (*(long *)(this + 0x368) != lVar3) {
      uVar2 = 0;
      do {
        DestructionEmitterShape::addEmitTriangle
                  (*(DestructionEmitterShape **)(lVar3 + uVar2 * 8),&fStack_54,&local_60,&local_6c);
        uVar2 = (ulong)((int)uVar2 + 1);
        lVar3 = *(long *)(this + 0x360);
      } while (uVar2 < (ulong)(*(long *)(this + 0x368) - lVar3 >> 3));
    }
    if (*(long *)(this + 0x3b8) != 0) {
      *(ulong *)(this + 0x3a8) =
           CONCAT44(fStack_44 + (float)((ulong)*(undefined8 *)(this + 0x3a8) >> 0x20),
                    local_48 + (float)*(undefined8 *)(this + 0x3a8));
      *(float *)(this + 0x3b0) = local_40 + *(float *)(this + 0x3b0);
      *(int *)(this + 0x3b4) = *(int *)(this + 0x3b4) + 1;
    }
  }
  onJointRemoved(this,in_w1,true);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


