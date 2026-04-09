// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: create
// Entry Point: 00b25664
// Size: 204 bytes
// Signature: undefined __thiscall create(DomXMLFile * this, char * param_1, char * param_2)


/* DomXMLFile::create(char const*, char const*) */

undefined8 __thiscall DomXMLFile::create(DomXMLFile *this,char *param_1,char *param_2)

{
  uint uVar1;
  XMLDocument *pXVar2;
  XMLNode *pXVar3;
  
  uVar1 = *(uint *)(this + 0x38);
  *(undefined4 *)(this + 0x38) = 0;
  if (8 < uVar1) {
    *(undefined8 *)(this + 200) = *(undefined8 *)(this + 0xc0);
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 0x80))();
  }
  pXVar2 = (XMLDocument *)operator_new(0x308);
                    /* try { // try from 00b256bc to 00b256cb has its CatchHandler @ 00b25730 */
  tinyxml2::XMLDocument::XMLDocument(pXVar2,true,0);
  *(XMLDocument **)(this + 0x28) = pXVar2;
  pXVar3 = (XMLNode *)
           tinyxml2::XMLDocument::NewDeclaration
                     (pXVar2,"xml version=\"1.0\" encoding=\"utf-8\" standalone=\"no\"");
  tinyxml2::XMLNode::InsertFirstChild((XMLNode *)pXVar2,pXVar3);
  pXVar2 = *(XMLDocument **)(this + 0x28);
  pXVar3 = (XMLNode *)tinyxml2::XMLDocument::NewElement(pXVar2,param_2);
  tinyxml2::XMLNode::InsertEndChild((XMLNode *)pXVar2,pXVar3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x10));
  this[8] = (DomXMLFile)0x1;
  return 1;
}


