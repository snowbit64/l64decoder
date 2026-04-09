// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOperationForType
// Entry Point: 00c0bd14
// Size: 48 bytes
// Signature: undefined __thiscall getOperationForType(CreateIR * this, IR_GENERIC_OPERATION param_1, GsTBasicType param_2)


/* CreateIR::getOperationForType(IR_GENERIC_OPERATION, GsTBasicType) */

undefined4 __thiscall
CreateIR::getOperationForType(CreateIR *this,IR_GENERIC_OPERATION param_1,GsTBasicType param_2)

{
  if (param_2 - 3 < 7) {
    return *(undefined4 *)(s_opcodeMap + (ulong)(param_2 - 3) * 4 + (ulong)param_1 * 0x1c);
  }
  return 0;
}


