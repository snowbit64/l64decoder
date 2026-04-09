// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginRenderTexture
// Entry Point: 00a08750
// Size: 380 bytes
// Signature: undefined __thiscall beginRenderTexture(RenderController * this, RenderTargetInfo * param_1)


/* RenderController::beginRenderTexture(RenderTargetInfo const&) */

void __thiscall
RenderController::beginRenderTexture(RenderController *this,RenderTargetInfo *param_1)

{
  undefined8 *puVar1;
  void *__dest;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar6 = *(undefined8 **)(this + 0x238);
  __src = *(void **)(this + 0x230);
  uVar7 = (ulong)*(uint *)(this + 0x248);
  __n = (long)puVar6 - (long)__src;
  if (uVar7 == (long)__n >> 3) {
    puVar1 = (undefined8 *)operator_new(0xb0);
    puVar2 = *(undefined8 **)(this + 0x240);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    if (puVar6 < puVar2) {
      *puVar6 = puVar1;
      *(undefined8 **)(this + 0x238) = puVar6 + 1;
    }
    else {
      uVar3 = (long)puVar2 - (long)__src;
      uVar5 = (long)uVar3 >> 2;
      if (uVar5 < uVar7 + 1) {
        uVar5 = uVar7 + 1;
      }
      if (0x7ffffffffffffff7 < uVar3) {
        uVar5 = 0x1fffffffffffffff;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)__dest + uVar7 * 8);
      *puVar6 = puVar1;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 0x230) = __dest;
      *(undefined8 **)(this + 0x238) = puVar6 + 1;
      *(void **)(this + 0x240) = (void *)((long)__dest + uVar5 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        uVar7 = (ulong)*(uint *)(this + 0x248);
      }
    }
  }
  puVar6 = *(undefined8 **)(*(long *)(this + 0x230) + uVar7 * 8);
  *(int *)(this + 0x248) = (int)uVar7 + 1;
  if (puVar6[0x10] != puVar6[0xf]) {
    puVar6[0x10] = puVar6[0xf];
  }
  if (puVar6[0x13] != puVar6[0x12]) {
    puVar6[0x13] = puVar6[0x12];
  }
  *(undefined2 *)(puVar6 + 0x15) = 0;
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  puVar6[0xb] = *(undefined8 *)(param_1 + 0x58);
  puVar6[10] = uVar12;
  puVar6[0xd] = uVar9;
  puVar6[0xc] = uVar8;
  puVar6[0xe] = uVar4;
  puVar6[9] = uVar11;
  puVar6[8] = uVar10;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar10 = *(undefined8 *)param_1;
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[4] = uVar4;
  puVar6[7] = uVar9;
  puVar6[6] = uVar8;
  puVar6[1] = uVar11;
  *puVar6 = uVar10;
  puVar6[3] = uVar13;
  puVar6[2] = uVar12;
  return;
}


