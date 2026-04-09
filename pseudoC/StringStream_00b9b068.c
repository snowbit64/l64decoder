// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StringStream
// Entry Point: 00b9b068
// Size: 80 bytes
// Signature: undefined __thiscall ~StringStream(StringStream * this)


/* StringStream::~StringStream() */

void __thiscall StringStream::~StringStream(StringStream *this)

{
  void *pvVar1;
  void **ppvVar2;
  
  ppvVar2 = *(void ***)this;
  while (ppvVar2 != (void **)0x0) {
    pvVar1 = *ppvVar2;
    *(void **)this = ppvVar2[2];
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    operator_delete(ppvVar2);
    ppvVar2 = *(void ***)this;
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


