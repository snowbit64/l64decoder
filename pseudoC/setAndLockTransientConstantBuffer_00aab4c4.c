// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAndLockTransientConstantBuffer
// Entry Point: 00aab4c4
// Size: 20 bytes
// Signature: undefined __thiscall setAndLockTransientConstantBuffer(NullCommandBuffer * this, uint param_1, IConstantBuffer * param_2)


/* NullCommandBuffer::setAndLockTransientConstantBuffer(unsigned int, IConstantBuffer*) */

void __thiscall
NullCommandBuffer::setAndLockTransientConstantBuffer
          (NullCommandBuffer *this,uint param_1,IConstantBuffer *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aab4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x10))(param_2,this);
  return;
}


