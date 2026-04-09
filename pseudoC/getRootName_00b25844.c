// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRootName
// Entry Point: 00b25844
// Size: 40 bytes
// Signature: undefined getRootName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DomXMLFile::getRootName() */

void DomXMLFile::getRootName(void)

{
  long in_x0;
  
  if (*(XMLNode **)(in_x0 + 0x28) != (XMLNode *)0x0) {
    tinyxml2::XMLNode::FirstChildElement(*(XMLNode **)(in_x0 + 0x28),(char *)0x0);
    tinyxml2::XMLNode::Value();
    return;
  }
  return;
}


