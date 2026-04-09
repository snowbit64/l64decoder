// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008b2cb0
// Size: 200 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* Sample::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

bool Sample::activate(IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((iVar1 == 0) && (param_1[0x30] != (IRenderDevice)0x0)) {
    (**(code **)(*(long *)param_1 + 0x88))(param_1,param_3);
    (**(code **)(*(long *)param_1 + 0x98))(*(undefined4 *)(param_1 + 0x58),param_1);
    (**(code **)(*(long *)param_1 + 0xb8))
              (*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),param_1);
    (**(code **)(*(long *)param_1 + 0xa0))(param_1,param_1 + 0x34);
    (**(code **)(*(long *)param_1 + 0xa8))(param_1,param_1 + 0x4c);
    (**(code **)(*(long *)param_1 + 200))(*(undefined4 *)(param_1 + 100),param_1);
    (**(code **)(*(long *)param_1 + 0xd0))(param_1,*(undefined4 *)(param_1 + 0x68));
    iVar1 = 3;
    *(undefined4 *)(param_1 + 0x28) = 3;
  }
  return iVar1 == 3;
}


