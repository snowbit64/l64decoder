// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixelsBlocked<PixelFormatConverter::ASTC5x4toRGBA32,5u,4u>
// Entry Point: 00aa087c
// Size: 420 bytes
// Signature: void __cdecl convertPixelsBlocked<PixelFormatConverter::ASTC5x4toRGBA32,5u,4u>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixelsBlocked<PixelFormatConverter::ASTC5x4toRGBA32, 5u,
   4u>(void const*, unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixelsBlocked<PixelFormatConverter::ASTC5x4toRGBA32,5u,4u>
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
  uchar *local_e8;
  void *local_d8;
  uint local_c8;
  uchar auStack_c0 [80];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (param_6 != 0) {
    local_c8 = 0;
    uVar6 = param_6;
    local_e8 = (uchar *)param_1;
    local_d8 = param_3;
    do {
      uVar3 = uVar6 - 4;
      if (3 < uVar6) {
        uVar6 = 4;
      }
      if (param_5 != 0) {
        iVar8 = 0;
        uVar7 = 0;
        puVar10 = local_e8;
        uVar5 = param_5;
        do {
          uVar2 = param_5 + iVar8 * -5;
          uVar1 = uVar5;
          if (4 < uVar5) {
            uVar1 = 5;
          }
          if (4 < uVar2) {
            uVar2 = 5;
          }
          ASTCUtil::decodeASTCBlock(puVar10,5,4,auStack_c0);
          if (local_c8 != param_6) {
            __src = auStack_c0;
            __dest = (void *)((long)local_d8 + (ulong)uVar7 * 4);
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
          uVar7 = uVar7 + 5;
          iVar8 = iVar8 + 1;
          uVar5 = uVar5 - 5;
        } while (uVar7 < param_5);
      }
      local_e8 = local_e8 + param_2;
      local_c8 = local_c8 + 4;
      local_d8 = (void *)((long)local_d8 + (ulong)(param_4 >> 2) * 0x10);
      uVar6 = uVar3;
    } while (local_c8 < param_6);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


