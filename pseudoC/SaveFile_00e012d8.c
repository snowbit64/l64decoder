// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SaveFile
// Entry Point: 00e012d8
// Size: 192 bytes
// Signature: undefined __thiscall SaveFile(XMLDocument * this, char * param_1, bool param_2)


/* tinyxml2::XMLDocument::SaveFile(char const*, bool) */

undefined4 __thiscall tinyxml2::XMLDocument::SaveFile(XMLDocument *this,char *param_1,bool param_2)

{
  FILE *__stream;
  
  if (param_1 == (char *)0x0) {
    SetError((XMLError)this,4,(char *)0x0,"filename=<null>");
    return *(undefined4 *)(this + 0x6c);
  }
  __stream = fopen(param_1,"w");
  if (__stream != (FILE *)0x0) {
    SaveFile(this,(__sFILE *)__stream,param_2);
    fclose(__stream);
    return *(undefined4 *)(this + 0x6c);
  }
  SetError((XMLError)this,4,(char *)0x0,"filename=%s",param_1);
  return *(undefined4 *)(this + 0x6c);
}


