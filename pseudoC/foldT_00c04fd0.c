// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: foldT
// Entry Point: 00c04fd0
// Size: 28 bytes
// Signature: undefined __thiscall foldT(Main * this, PerThreadData * param_1)


/* DictionaryCompressor::Main::foldT(DictionaryCompressor::PerThreadData*) */

undefined8 __thiscall DictionaryCompressor::Main::foldT(Main *this,PerThreadData *param_1)

{
  *(ulong *)(this + 0x18) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) +
                (int)((ulong)*(undefined8 *)param_1 >> 0x20),
                (int)*(undefined8 *)(this + 0x18) + (int)*(undefined8 *)param_1);
  return 1;
}


