// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f09b70
// Entry Point: 00f09b70
// Size: 144 bytes
// Signature: noreturn undefined FUN_00f09b70(void)


void FUN_00f09b70(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  char acStack_260 [512];
  undefined *local_40;
  char *pcStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  pcStack_38 = acStack_260;
  puStack_30 = &local_290;
  uStack_28 = 0xffffff80ffffffd0;
  local_290 = param_3;
  local_288 = param_4;
  uStack_280 = param_5;
  local_278 = param_6;
  uStack_270 = param_7;
  local_268 = param_8;
  local_40 = (undefined *)register0x00000008;
  vsnprintf(acStack_260,0x200,param_2,&local_40);
  FUN_00f09e18(param_1,acStack_260);
                    /* WARNING: Subroutine does not return */
  FUN_00f0a90c(param_1,2);
}


