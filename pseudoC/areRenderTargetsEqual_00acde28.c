// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: areRenderTargetsEqual
// Entry Point: 00acde28
// Size: 168 bytes
// Signature: undefined __thiscall areRenderTargetsEqual(VulkanCommandBuffer * this, RenderTargetDesc * param_1, RenderTargetDesc * param_2)


/* VulkanCommandBuffer::areRenderTargetsEqual(RenderTargetDesc const&, RenderTargetDesc const&) */

bool __thiscall
VulkanCommandBuffer::areRenderTargetsEqual
          (VulkanCommandBuffer *this,RenderTargetDesc *param_1,RenderTargetDesc *param_2)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = *(uint *)param_1;
  uVar2 = (ulong)uVar1;
  if (uVar1 == *(uint *)param_2) {
    if (uVar1 != 0) {
      piVar3 = (int *)(param_1 + 0x20);
      piVar4 = (int *)(param_2 + 0x20);
      do {
        if (*(long *)(piVar3 + -6) != *(long *)(piVar4 + -6)) {
          return false;
        }
        if (*(long *)(piVar3 + -4) != *(long *)(piVar4 + -4)) {
          return false;
        }
        if (piVar3[-1] != piVar4[-1]) {
          return false;
        }
        if (piVar3[-2] != piVar4[-2]) {
          return false;
        }
        if (*piVar3 != *piVar4) {
          return false;
        }
        piVar3 = piVar3 + 0xc;
        piVar4 = piVar4 + 0xc;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (*(long *)(param_1 + 200) == *(long *)(param_2 + 200)) {
      return *(long *)(param_1 + 0xd0) == *(long *)(param_2 + 0xd0);
    }
  }
  return false;
}


