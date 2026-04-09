// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00cd871c
// Size: 32 bytes
// Signature: undefined __thiscall IsolatedInitialize(RandomNumberSink * this, NameValuePairs * param_1)


/* CryptoPP::RandomNumberSink::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::RandomNumberSink::IsolatedInitialize(RandomNumberSink *this,NameValuePairs *param_1)

{
  NameValuePairs::GetRequiredParameter<CryptoPP::RandomNumberGenerator*>
            ((char *)param_1,"RandomNumberSink",
             (RandomNumberGenerator **)"RandomNumberGeneratorPointer");
  return;
}


