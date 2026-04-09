// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printLine
// Entry Point: 006dfd1c
// Size: 252 bytes
// Signature: undefined __cdecl printLine(char * param_1, ...)


/* FileManagerStats::Printer::printLine(char const*, ...) */

void FileManagerStats::Printer::printLine(char *param_1,...)

{
  long lVar1;
  int iVar2;
  char *in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined *local_860;
  undefined *puStack_858;
  undefined8 *puStack_850;
  undefined8 uStack_848;
  char acStack_838 [2048];
  long local_38;
  
  puStack_858 = &stack0xfffffffffffff780;
  puStack_850 = &local_8b0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_848 = 0xffffff80ffffffd0;
  local_8b0 = in_x2;
  local_8a8 = in_x3;
  uStack_8a0 = in_x4;
  local_898 = in_x5;
  uStack_890 = in_x6;
  local_888 = in_x7;
  local_860 = (undefined *)register0x00000008;
  iVar2 = vsnprintf(acStack_838,0x800,in_x1,&local_860);
  if (iVar2 != -1) {
    FontOverlayRenderer::xyprintf
              (*(FontOverlayRenderer **)param_1,0.03,*(float *)(param_1 + 8),0.02,0,acStack_838);
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + -0.022;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


