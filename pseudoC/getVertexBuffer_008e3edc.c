// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexBuffer
// Entry Point: 008e3edc
// Size: 336 bytes
// Signature: undefined __thiscall getVertexBuffer(VertexBufferPool * this, ICommandBuffer * param_1, uint param_2, IRenderDevice * param_3)


/* VertexBufferPool::getVertexBuffer(ICommandBuffer*, unsigned int, IRenderDevice*) */

void __thiscall
VertexBufferPool::getVertexBuffer
          (VertexBufferPool *this,ICommandBuffer *param_1,uint param_2,IRenderDevice *param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 < 0x400001) {
    if (param_2 < 0x101) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      uVar4 = 0x100;
      do {
        uVar4 = uVar4 << 1;
        uVar3 = uVar3 + 1;
      } while (uVar4 < param_2);
    }
    if (*(int *)(this + (ulong)uVar3 * 0x408 + 0x408) != 0) {
      uVar4 = *(int *)(this + (ulong)uVar3 * 0x408 + 0x408) - 1;
      *(uint *)(this + (ulong)uVar3 * 0x408 + 0x408) = uVar4;
      uVar2 = *(undefined8 *)(this + (ulong)uVar4 * 8 + (ulong)uVar3 * 0x408 + 8);
      goto LAB_008e4000;
    }
    if ((*(int *)(this + 0x3c80) + param_2 < 0x2000001) ||
       (cleanUnusedVertexBuffers(this,0x1800000 - param_2),
       *(int *)(this + 0x3c80) + param_2 >> 0x1b == 0)) {
      local_58 = 2 << (ulong)(uVar3 + 7 & 0x1f);
      uStack_54 = *(undefined4 *)this;
      local_60 = 0;
      local_50 = "VertexBufferPool";
      uVar2 = (**(code **)(*(long *)param_3 + 0x108))(param_3,param_1,&local_60);
      *(int *)(this + 0x3c80) = *(int *)(this + 0x3c80) + local_58;
      goto LAB_008e4000;
    }
  }
  uVar2 = 0;
LAB_008e4000:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


