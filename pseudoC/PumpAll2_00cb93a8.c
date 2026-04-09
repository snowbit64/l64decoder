// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PumpAll2
// Entry Point: 00cb93a8
// Size: 64 bytes
// Signature: undefined __thiscall PumpAll2(SourceTemplate<CryptoPP::StringStore> * this, bool param_1)


/* CryptoPP::SourceTemplate<CryptoPP::StringStore>::PumpAll2(bool) */

void __thiscall
CryptoPP::SourceTemplate<CryptoPP::StringStore>::PumpAll2
          (SourceTemplate<CryptoPP::StringStore> *this,bool param_1)

{
  BufferedTransformation *pBVar1;
  
  pBVar1 = (BufferedTransformation *)(**(code **)(*(long *)this + 0x160))();
  BufferedTransformation::TransferAllTo2
            ((BufferedTransformation *)(this + 0x30),pBVar1,(basic_string *)&DEFAULT_CHANNEL,param_1
            );
  return;
}


