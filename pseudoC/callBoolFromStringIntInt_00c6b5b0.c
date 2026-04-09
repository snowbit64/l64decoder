// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callBoolFromStringIntInt
// Entry Point: 00c6b5b0
// Size: 124 bytes
// Signature: undefined __cdecl callBoolFromStringIntInt(char * param_1, char * param_2, uint param_3, uint param_4)


/* AndroidJNICall::callBoolFromStringIntInt(char const*, char const*, unsigned int, unsigned int) */

undefined8
AndroidJNICall::callBoolFromStringIntInt(char *param_1,char *param_2,uint param_3,uint param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)getEnv();
  (**(code **)(*plVar1 + 0x108))
            (plVar1,*(undefined8 *)(param_1 + 0x50),param_2,"(Ljava/lang/String;II)Z");
  uVar2 = (**(code **)(*plVar1 + 0x538))(plVar1,param_3);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return 0;
}


