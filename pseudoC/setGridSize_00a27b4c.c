// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGridSize
// Entry Point: 00a27b4c
// Size: 264 bytes
// Signature: undefined __thiscall setGridSize(LightListRasterizer * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* LightListRasterizer::setGridSize(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
LightListRasterizer::setGridSize
          (LightListRasterizer *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  
  uVar2 = (param_4 + 0x1f >> 5) - 1;
  uVar2 = uVar2 | uVar2 >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  if (0x3f < param_1) {
    param_1 = 0x40;
  }
  uVar2 = uVar2 | uVar2 >> 8;
  if (0x3f < param_2) {
    param_2 = 0x40;
  }
  uVar2 = uVar2 | uVar2 >> 0x10;
  if (0x1f < param_3) {
    param_3 = 0x20;
  }
  iVar1 = uVar2 + 1;
  if (uVar2 == 0xffffffff) {
    iVar1 = 1;
  }
  if ((((*(uint *)(this + 8) != param_1) || (*(uint *)(this + 0xc) != param_2)) ||
      (*(uint *)(this + 0x14) != param_3)) || (*(int *)(this + 0x24) != iVar1)) {
    uVar2 = param_2 * param_1 * iVar1;
    *(uint *)(this + 8) = param_1;
    *(uint *)(this + 0xc) = param_2;
    *(int *)(this + 0x24) = iVar1;
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
    *(undefined4 *)(this + 0x10) = 1;
    *(uint *)(this + 0x14) = param_3;
    if (uVar2 == 0) {
      *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x40);
      pvVar3 = *(void **)(this + 0x88);
    }
    else {
      std::__ndk1::
      vector<LightListRasterizer::GridEntry,std::__ndk1::allocator<LightListRasterizer::GridEntry>>
      ::__append((vector<LightListRasterizer::GridEntry,std::__ndk1::allocator<LightListRasterizer::GridEntry>>
                  *)(this + 0x28),(ulong)uVar2);
      *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x40);
      std::__ndk1::
      vector<LightListRasterizer::GridEntry,std::__ndk1::allocator<LightListRasterizer::GridEntry>>
      ::__append((vector<LightListRasterizer::GridEntry,std::__ndk1::allocator<LightListRasterizer::GridEntry>>
                  *)(this + 0x40),(ulong)uVar2);
      pvVar3 = *(void **)(this + 0x88);
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    pvVar3 = operator_new__((ulong)*(uint *)(this + 0x14) << 2);
    *(void **)(this + 0x88) = pvVar3;
  }
  return;
}


