// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueReleaseColShape
// Entry Point: 0099f950
// Size: 84 bytes
// Signature: undefined __thiscall enqueueReleaseColShape(Bt2ScenegraphPhysicsContext * this, btCollisionShape * param_1, bool param_2)


/* Bt2ScenegraphPhysicsContext::enqueueReleaseColShape(btCollisionShape*, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueReleaseColShape
          (Bt2ScenegraphPhysicsContext *this,btCollisionShape *param_1,bool param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  if (param_2) {
    uVar2 = *(long *)(this + 0x148) - *(long *)(this + 0x140);
    if ((int)(uVar2 >> 4) != 0) {
      uVar2 = uVar2 >> 4 & 0xffffffff;
      pcVar1 = (char *)(*(long *)(this + 0x140) + 8);
      do {
        if ((*pcVar1 == '\0') && (*(btCollisionShape **)(*(long *)(pcVar1 + -8) + 200) == param_1))
        {
          *pcVar1 = '\x01';
          return;
        }
        pcVar1 = pcVar1 + 0x10;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  releaseColShape(this,param_1);
  return;
}


