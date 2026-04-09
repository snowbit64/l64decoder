// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixelsBlocked<PixelFormatConverter::ASTC4x4toRGBA32,4u,4u>
// Entry Point: 00aa06dc
// Size: 416 bytes
// Signature: void __cdecl convertPixelsBlocked<PixelFormatConverter::ASTC4x4toRGBA32,4u,4u>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixelsBlocked<PixelFormatConverter::ASTC4x4toRGBA32, 4u,
   4u>(void const*, unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixelsBlocked<PixelFormatConverter::ASTC4x4toRGBA32,4u,4u>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uchar *puVar10;
  void *__dest;
  uchar *__src;
  uchar *local_d8;
  void *local_c8;
  uint local_b8;
  uchar auStack_b0 [72];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_6 != 0) {
    local_b8 = 0;
    uVar6 = param_6;
    local_d8 = (uchar *)param_1;
    local_c8 = param_3;
    do {
      uVar3 = uVar6 - 4;
      if (3 < uVar6) {
        uVar6 = 4;
      }
      if (param_5 != 0) {
        iVar8 = 0;
        uVar7 = 0;
        puVar10 = local_d8;
        uVar5 = param_5;
        do {
          uVar2 = param_5 + iVar8 * -4;
          uVar1 = uVar5;
          if (3 < uVar5) {
            uVar1 = 4;
          }
          if (3 < uVar2) {
            uVar2 = 4;
          }
          ASTCUtil::decodeASTCBlock(puVar10,4,4,auStack_b0);
          if (local_b8 != param_6) {
            __src = auStack_b0;
            __dest = (void *)((long)local_c8 + (ulong)uVar7 * 4);
            uVar9 = (ulong)uVar6;
            do {
              if (uVar7 != param_5) {
                memcpy(__dest,__src,(ulong)uVar2 << 2);
              }
              __src = __src + (ulong)uVar1 * 4;
              __dest = (void *)((long)__dest + (ulong)(param_4 >> 2) * 4);
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar10 = puVar10 + 0x10;
          uVar7 = uVar7 + 4;
          iVar8 = iVar8 + 1;
          uVar5 = uVar5 - 4;
        } while (uVar7 < param_5);
      }
      local_d8 = local_d8 + param_2;
      local_b8 = local_b8 + 4;
      local_c8 = (void *)((long)local_c8 + (ulong)(param_4 >> 2) * 0x10);
      uVar6 = uVar3;
    } while (local_b8 < param_6);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


