// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessData
// Entry Point: 00d0b4b8
// Size: 40 bytes
// Signature: undefined __thiscall ProcessData(ECB_OneWay * this, uchar * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::ECB_OneWay::ProcessData(unsigned char*, unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::ECB_OneWay::ProcessData(ECB_OneWay *this,uchar *param_1,uchar *param_2,ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00d0b4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(this + 0x10) + 8) + 0x58))
            ((long *)(*(long *)(this + 0x10) + 8),param_2,0,param_1,param_3,0x10);
  return;
}


