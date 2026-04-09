// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Pump2
// Entry Point: 00cb9308
// Size: 80 bytes
// Signature: undefined __thiscall Pump2(SourceTemplate<CryptoPP::StringStore> * this, ulong * param_1, bool param_2)


/* CryptoPP::SourceTemplate<CryptoPP::StringStore>::Pump2(unsigned long&, bool) */

void __thiscall
CryptoPP::SourceTemplate<CryptoPP::StringStore>::Pump2
          (SourceTemplate<CryptoPP::StringStore> *this,ulong *param_1,bool param_2)

{
  BufferedTransformation *pBVar1;
  
  pBVar1 = (BufferedTransformation *)(**(code **)(*(long *)this + 0x160))();
  StringStore::TransferTo2
            ((StringStore *)(this + 0x30),pBVar1,param_1,(basic_string *)&DEFAULT_CHANNEL,param_2);
  return;
}


