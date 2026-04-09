// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PumpMessages2
// Entry Point: 00cb9358
// Size: 80 bytes
// Signature: undefined __thiscall PumpMessages2(SourceTemplate<CryptoPP::StringStore> * this, uint * param_1, bool param_2)


/* CryptoPP::SourceTemplate<CryptoPP::StringStore>::PumpMessages2(unsigned int&, bool) */

void __thiscall
CryptoPP::SourceTemplate<CryptoPP::StringStore>::PumpMessages2
          (SourceTemplate<CryptoPP::StringStore> *this,uint *param_1,bool param_2)

{
  BufferedTransformation *pBVar1;
  
  pBVar1 = (BufferedTransformation *)(**(code **)(*(long *)this + 0x160))();
  BufferedTransformation::TransferMessagesTo2
            ((BufferedTransformation *)(this + 0x30),pBVar1,param_1,(basic_string *)&DEFAULT_CHANNEL
             ,param_2);
  return;
}


