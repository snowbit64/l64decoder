// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seek
// Entry Point: 009426c8
// Size: 80 bytes
// Signature: undefined __thiscall seek(BufferedFileReader * this, ulonglong param_1)


/* BufferedFileReader::seek(unsigned long long) */

undefined8 __thiscall BufferedFileReader::seek(BufferedFileReader *this,ulonglong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(this + 0x40);
  if (param_1 <= *(ulong *)(this + 0x40)) {
    uVar1 = param_1;
  }
  if ((*(ulong *)(this + 0x30) <= uVar1) &&
     (uVar1 < *(ulong *)(this + 0x30) + (ulong)*(uint *)(this + 0x2c))) {
    *(ulong *)(this + 0x38) = uVar1;
    return 1;
  }
  *(ulong *)(this + 0x30) = uVar1;
  *(ulong *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x2c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00942714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(long **)(this + 0x10) + 0x38))();
  return uVar2;
}


