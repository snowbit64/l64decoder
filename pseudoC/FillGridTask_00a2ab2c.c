// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FillGridTask
// Entry Point: 00a2ab2c
// Size: 64 bytes
// Signature: undefined __thiscall ~FillGridTask(FillGridTask * this)


/* LightListRasterizer::FillGridTask::~FillGridTask() */

void __thiscall LightListRasterizer::FillGridTask::~FillGridTask(FillGridTask *this)

{
  *(undefined ***)this = &PTR__Task_00fde908;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  operator_delete(this);
  return;
}


