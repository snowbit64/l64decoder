// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printLine
// Entry Point: 006df6c8
// Size: 432 bytes
// Signature: undefined __cdecl printLine(char * param_1, float param_2, char * param_3, ...)


/* TextureStreamingStats::Printer::printLine(char const*, float, char const*, ...) */

void TextureStreamingStats::Printer::printLine(char *param_1,float param_2,char *param_3,...)

{
  long lVar1;
  uint uVar2;
  char *in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined auStack_8f0 [8];
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined *local_8a0;
  undefined *puStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined2 local_878;
  undefined local_876 [2045];
  undefined local_79;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_8e8 = in_x3;
  local_8e0 = in_x4;
  uStack_8d8 = in_x5;
  local_8d0 = in_x6;
  uStack_8c8 = in_x7;
  if (param_3 != (char *)0x0) {
    FontOverlayRenderer::xyprintf
              (*(FontOverlayRenderer **)param_1,0.03,*(float *)(param_1 + 8),0.02,0,param_3);
  }
  if (in_x2 != (char *)0x0) {
    puStack_898 = &stack0xfffffffffffff740;
    puStack_890 = auStack_8f0;
    uStack_888 = 0xffffff90ffffffd8;
    local_8a0 = (undefined *)register0x00000008;
    uVar2 = vsnprintf((char *)&local_878,0x800,in_x2,&local_8a0);
    local_79 = 0;
    if (uVar2 != 0) {
      uVar3 = (ulong)uVar2;
      iVar4 = 0;
      uVar5 = 0;
      do {
        if (*(char *)(undefined2 *)((long)&local_878 + uVar5) == ' ') {
          memmove((void *)((long)&local_878 + uVar5 + 3),(void *)((long)&local_878 + uVar5 + 1),
                  (ulong)(uint)((int)uVar3 + iVar4));
          uVar3 = (ulong)((int)uVar3 + 2);
          *(undefined2 *)((long)&local_878 + uVar5) = 0x80e2;
          *(undefined *)((long)&local_878 + uVar5 + 2) = 0x87;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (uVar5 < uVar3);
    }
    FontOverlayRenderer::xyprintf
              (*(FontOverlayRenderer **)param_1,param_2 + 0.03,*(float *)(param_1 + 8),0.02,0,
               (char *)&local_878);
  }
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + -0.022;
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


