// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoadFile
// Entry Point: 00e00fc8
// Size: 192 bytes
// Signature: undefined __thiscall LoadFile(XMLDocument * this, char * param_1)


/* tinyxml2::XMLDocument::LoadFile(char const*) */

undefined4 __thiscall tinyxml2::XMLDocument::LoadFile(XMLDocument *this,char *param_1)

{
  FILE *__stream;
  
  if (param_1 == (char *)0x0) {
    SetError((XMLError)this,4,(char *)0x0,"filename=<null>");
    return *(undefined4 *)(this + 0x6c);
  }
  Clear();
  __stream = fopen(param_1,"rb");
  if (__stream != (FILE *)0x0) {
    LoadFile(this,(__sFILE *)__stream);
    fclose(__stream);
    return *(undefined4 *)(this + 0x6c);
  }
  SetError((XMLError)this,3,(char *)0x0,"filename=%s",param_1);
  return *(undefined4 *)(this + 0x6c);
}


