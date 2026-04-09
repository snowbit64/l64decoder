// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShaderHandleThreadSafe
// Entry Point: 00bf6f58
// Size: 272 bytes
// Signature: undefined __thiscall getShaderHandleThreadSafe(CompiledShaderArchive * this, ShaderHash * param_1, uint * param_2)


/* CompiledShaderArchive::getShaderHandleThreadSafe(CompiledShaderArchive::ShaderHash const&,
   unsigned int&) */

undefined4 __thiscall
CompiledShaderArchive::getShaderHandleThreadSafe
          (CompiledShaderArchive *this,ShaderHash *param_1,uint *param_2)

{
  int iVar1;
  CompiledShaderArchive **ppCVar2;
  CompiledShaderArchive **ppCVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  CompiledShaderArchive **ppCVar8;
  
  Mutex::enterCriticalSection();
  ppCVar8 = (CompiledShaderArchive **)(this + 0xa8);
  ppCVar3 = (CompiledShaderArchive **)*ppCVar8;
  ppCVar2 = ppCVar8;
  if (ppCVar3 != (CompiledShaderArchive **)0x0) {
    do {
      uVar6 = (*(ulong *)((long)ppCVar3 + 0x1c) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)((long)ppCVar3 + 0x1c) & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar6 = (*(ulong *)param_1 & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)param_1 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      if (uVar5 == uVar6) {
        uVar6 = (*(ulong *)((long)ppCVar3 + 0x24) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)((long)ppCVar3 + 0x24) & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar6 = (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        if (uVar5 != uVar6) goto LAB_00bf6f94;
        uVar4 = 0;
      }
      else {
LAB_00bf6f94:
        uVar4 = 1;
        if (uVar5 < uVar6) {
          uVar4 = 0xffffffff;
        }
      }
      if (-1 < (int)uVar4) {
        ppCVar2 = ppCVar3;
      }
      ppCVar3 = (CompiledShaderArchive **)ppCVar3[uVar4 >> 0x1f];
    } while (ppCVar3 != (CompiledShaderArchive **)0x0);
    if (ppCVar2 != ppCVar8) {
      uVar6 = (*(ulong *)param_1 & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)param_1 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar6 = (*(ulong *)((long)ppCVar2 + 0x1c) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)((long)ppCVar2 + 0x1c) & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      if (uVar5 == uVar6) {
        uVar6 = (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar6 = (*(ulong *)((long)ppCVar2 + 0x24) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)((long)ppCVar2 + 0x24) & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        if (uVar5 != uVar6) goto LAB_00bf7030;
      }
      else {
LAB_00bf7030:
        iVar1 = 1;
        if (uVar5 < uVar6) {
          iVar1 = -1;
        }
        if (iVar1 < 0) goto LAB_00bf7028;
      }
      uVar7 = 1;
      *param_2 = *(uint *)((long)ppCVar2 + 0x2c);
      goto LAB_00bf704c;
    }
  }
LAB_00bf7028:
  uVar7 = 0;
LAB_00bf704c:
  Mutex::leaveCriticalSection();
  return uVar7;
}


