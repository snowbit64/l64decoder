-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HTMLUtil = {encodeEntities = {["<"] = "&lt;", [">"] = "&gt;", ["ä"] = "&auml;", ["à"] = "&agrave;", ["â"] = "&acirc;", ["é"] = "&eacute;", ["è"] = "&egrave;", ["ê"] = "&ecirc;", ["ë"] = "&euml;", ["î"] = "&icirc;", ["ï"] = "&iuml;", ["ô"] = "&ocirc;", ["ö"] = "&ouml;", ["ù"] = "&ugrave;", ["û"] = "&ucirc;", ["ü"] = "&uuml;", ["ÿ"] = "&yuml;", ["À"] = "&Agrave;", ["Â"] = "&Acirc;", ["É"] = "&Eacute;", ["È"] = "&Egrave;", ["Ê"] = "&Ecirc;", ["Ë"] = "&Euml;", ["Î"] = "&Icirc;", ["Ï"] = "&Iuml;", ["Ô"] = "&Ocirc;", ["Ö"] = "&Ouml;", ["Ù"] = "&Ugrave;", ["Û"] = "&Ucirc;", ["ç"] = "&ccedil;", ["Ç"] = "&Ccedil;", ["Ÿ"] = "&Yuml;", ["«"] = "&laquo;", ["»"] = "&raquo;", ["©"] = "&copy;", ["®"] = "&reg;", ["æ"] = "&aelig;", ["Æ"] = "&AElig;", ["Œ"] = "&OElig;", ["œ"] = "&oelig;"}, decodeEntities = {amp = "&", auml = "ä", agrave = "à", acirc = "â", eacute = "é", egrave = "è", ecirc = "ê", euml = "ë", icirc = "î", iuml = "ï", ocirc = "ô", ouml = "ö", ugrave = "ù", ucirc = "û", uuml = "ü", yuml = "ÿ", Agrave = "À", Acirc = "Â", Eacute = "É", Egrave = "È", Ecirc = "Ê", Euml = "Ë", Icirc = "Î", Iuml = "Ï", Ocirc = "Ô", Ouml = "Ö", Ugrave = "Ù", Ucirc = "Û", ccedil = "ç", Ccedil = "Ç", Yuml = "Ÿ", laquo = "«", raquo = "»", copy = "©", reg = "®", aelig = "æ", AElig = "Æ", OElig = "Œ", oelig = "œ"}}
function HTMLUtil.encodeToHTML(v0, v1)
  if v1 then
    return string.gsub(v0, "]]>", "]]]]><![CDATA[>")
  end
  v3 = string.gsub(v2, "&", "&amp;")
  v3 = string.gsub(v3, "\"", "&quot;")
  v3 = string.gsub(v3, "]", "&#93;")
  v3 = string.gsub(v3, "<", "&lt;")
  v3 = string.gsub(v3, ">", "&gt;")
  v3 = string.gsub(v3, "\n", "&#10;")
  v3 = string.gsub(v3, "\r", "&#13;")
  return v3
end
function HTMLUtil.decodeFromHTML(str)
  return string.gsub(str, "&%a+;", function(str)
    local v4 = string.sub(str, 2, -2)
    return HTMLUtil.decodeEntities[v4] or str
  end)
end
