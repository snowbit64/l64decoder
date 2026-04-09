// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAndLockTransientConstantBufferCs
// Entry Point: 00aab534
// Size: 20 bytes
// Signature: undefined __thiscall setAndLockTransientConstantBufferCs(NullCommandBuffer * this, uint param_1, IConstantBuffer * param_2)


/* NullCommandBuffer::setAndLockTransientConstantBufferCs(unsigned int, IConstantBuffer*) */

void __thiscall
NullCommandBuffer::setAndLockTransientConstantBufferCs
          (NullCommandBuffer *this,uint param_1,IConstantBuffer *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aab544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x10))(param_2,this);
  return;
}


