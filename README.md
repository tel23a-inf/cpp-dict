# Aufgaben zu binären Suchbäumen

Mit den Aufgaben in diesem Repo wird ein einfacher binärer Suchbaum entwickelt.
Auf dieser Basis wird anschließend ein Wörterbuch implementiert.

## Überblick

### Knoten-Datentyp / Binärer Suchbaum

Im Verzeichnis `src/node` befindet die Implementierung eines Knoten-Datentyps.
Diese Implementierung ist generisch gehalten, d.h. sie kann für beliebige Datentypen
verwendet werden.

Ein Knoten besteht aus einem Schlüssel (`key`), einem Wert (`value`)
und zwei Pointern auf die Kinder (`left` und `right`).
Die Datentypen von `key` und `value` sind generisch und können bei der
Instanziierung des Knotens festgelegt werden.

*Anmerkung*: Die Implementierung des Knotens befindet sich komplett in der Header-Datei,
da dies bei Templates üblich und meist auch notwendig ist.
In der CPP-Datei befinden sich nur die zugehörigen Tests.

Der Knoten-Datentyp hat einige Methoden zum Einfügen und Aufsuchen von Knoten.

### Wörterbuch

Im Verzeichnis `src/dict` befindet sich die Implementierung eines Wörterbuchs.
Das Wörterbuch hat ein einziges Attribut, den Wurzelknoten eines binären Suchbaums.

Die Methoden des Wörterbuchs verwenden den Suchbaum, um die Funktionalität umzusetzen.

## Aufgaben

### Implementierung von `Node`und `Dict`

Implementieren Sie die offenen Methoden in den Dateien
`src/node/node.h` und `src/dict/dict.cpp`.

In den jeweiligen `.cpp`-Dateien finden Sie die zugehörigen Tests.

### Weiterführende Aufgabe: `contains_en`

Implementieren Sie eine Methode `contains_en` im Wörterbuch,
die prüft, ob ein englisches Wort im Wörterbuch enthalten ist.

* Welche Schwierigkeiten ergeben sich bei der Implementierung?
* Geben Sie eine Komplexitätsabschätzung für die Methode an.
* Formulieren Sie eigene Tests für die Methode.

### Weiterführende Aufgabe: Andere Map-Datentypen

Das Wörterbuch ist i.W. eine Abbildung von Strings auf Strings.
Nutzen Sie die Knoten-Implementierung für andere ähnliche Datentypen.
Beispiele:

* Studierenden-Datenbank: Abbildung von Namen auf Matrikelnummern
* Noten-Verzeichnis: Abbildung von ...
  * Matrikelnummer auf Noten
  * Vorlesung auf Noten
  * Vorlesung auf Abbildung von Matrikelnummern auf Noten
* Benutzer-Datenbank: Abbildung von Benutzernamen auf Passwörter
* ...

*Anmerkung*: Diese weiteren Beispiele sind alle auf ähnliche Weise umsetzbar.
I.W. gehen Sie jedes Mal gleich vor und definieren ein Struct,
das einen Wurzelknoten für den Suchbaum enthält.

* Für den Wurzelknoten müssen Sie die passenden Typen für Schlüssel und Wert festlegen.
* Die Methoden des neuen Structs sollten dann die Funktionalität des Wurzelknotens nutzen.

### Weiterführende Aufgabe: Weitere Baum-Funktionalität

Implementieren Sie weitere Funktionalität für den binären Suchbaum.
Beispiele:

* Löschen von Knoten
* Inorder-, Preorder- und Postorder-Traversierung
* Höhe des Baums bestimmen
* AVL-Rotationen umsetzen
* ...
