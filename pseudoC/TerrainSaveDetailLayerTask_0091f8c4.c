// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainSaveDetailLayerTask
// Entry Point: 0091f8c4
// Size: 100 bytes
// Signature: undefined __thiscall ~TerrainSaveDetailLayerTask(TerrainSaveDetailLayerTask * this)


/* I3DSave::TerrainSaveDetailLayerTask::~TerrainSaveDetailLayerTask() */

void __thiscall
I3DSave::TerrainSaveDetailLayerTask::~TerrainSaveDetailLayerTask(TerrainSaveDetailLayerTask *this)

{
  *(undefined ***)this = &PTR__TerrainSaveDetailLayerTask_00fdfbf0;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  *(undefined ***)this = &PTR__Task_00fde908;
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


