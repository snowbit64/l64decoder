// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printLine
// Entry Point: 00a177ac
// Size: 316 bytes
// Signature: undefined __cdecl printLine(char * param_1, float param_2, char * param_3, ...)


/* RenderStatsOverlay::Printer::printLine(char const*, float, char const*, ...) */

char * RenderStatsOverlay::Printer::printLine(char *param_1,float param_2,char *param_3,...)

{
  long lVar1;
  char *in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined auStack_2c0 [8];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined *local_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  char acStack_248 [511];
  undefined local_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_2b8 = in_x3;
  local_2b0 = in_x4;
  uStack_2a8 = in_x5;
  local_2a0 = in_x6;
  uStack_298 = in_x7;
  if (param_3 != (char *)0x0) {
    FontOverlayRenderer::xyprintf
              (*(FontOverlayRenderer **)param_1,0.03,*(float *)(param_1 + 8),0.019,0,param_3);
  }
  if (in_x2 != (char *)0x0) {
    puStack_268 = &stack0xfffffffffffffd70;
    puStack_260 = auStack_2c0;
    uStack_258 = 0xffffff90ffffffd8;
    local_270 = (undefined *)register0x00000008;
    vsnprintf(acStack_248,0x200,in_x2,&local_270);
    local_49 = 0;
    FontOverlayRenderer::xyprintf
              (*(FontOverlayRenderer **)param_1,param_2 + 0.03,*(float *)(param_1 + 8),0.019,3,
               acStack_248);
  }
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + -0.0209;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


